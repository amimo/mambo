#include "pie-a64-decoder.h"

a64_instruction a64_decode(uint32_t *address) {
  uint32_t instruction = *address;
  if ((instruction & (1 << 28)) == 0) {
    if ((instruction & (1 << 27)) == 0) {
      return A64_INVALID;
    } else {
      if ((instruction & (1 << 25)) == 0) {
        if ((instruction & (1 << 29)) == 0) {
          if ((instruction & (1 << 26)) == 0) {
            if ((instruction & (1 << 24)) == 0) {
              // xx001000xxxxxxxxxxxxxxxxxxxxxxxx
              return A64_LDX_STX;
            } else {
              return A64_INVALID;
            }
          } else {
            if ((instruction & (1 << 31)) == 0) {
              if ((instruction & (1 << 24)) == 0) {
                if ((instruction & (1 << 23)) == 0) {
                  if ((instruction & (1 << 21)) == 0) {
                    if ((instruction & (1 << 20)) == 0) {
                      if ((instruction & (1 << 19)) == 0) {
                        if ((instruction & (1 << 18)) == 0) {
                          if ((instruction & (1 << 17)) == 0) {
                            if ((instruction & (1 << 16)) == 0) {
                              // 0x0011000x000000xxxxxxxxxxxxxxxx
                              return A64_LDX_STX_MULTIPLE;
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    } else {
                      return A64_INVALID;
                    }
                  } else {
                    return A64_INVALID;
                  }
                } else {
                  if ((instruction & (1 << 21)) == 0) {
                    // 0x0011001x0xxxxxxxxxxxxxxxxxxxxx
                    return A64_LDX_STX_MULTIPLE_POST;
                  } else {
                    return A64_INVALID;
                  }
                }
              } else {
                if ((instruction & (1 << 23)) == 0) {
                  if ((instruction & (1 << 20)) == 0) {
                    if ((instruction & (1 << 19)) == 0) {
                      if ((instruction & (1 << 18)) == 0) {
                        if ((instruction & (1 << 17)) == 0) {
                          if ((instruction & (1 << 16)) == 0) {
                            // 0x0011010xx00000xxxxxxxxxxxxxxxx
                            return A64_LDX_STX_SINGLE;
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    } else {
                      return A64_INVALID;
                    }
                  } else {
                    return A64_INVALID;
                  }
                } else {
                  // 0x0011011xxxxxxxxxxxxxxxxxxxxxxx
                  return A64_LDX_STX_SINGLE_POST;
                }
              }
            } else {
              return A64_INVALID;
            }
          }
        } else {
          // xx101x0xxxxxxxxxxxxxxxxxxxxxxxxx
          return A64_LDP_STP;
        }
      } else {
        if ((instruction & (1 << 26)) == 0) {
          if ((instruction & (1 << 24)) == 0) {
            // xxx01010xxxxxxxxxxxxxxxxxxxxxxxx
            return A64_LOGICAL_REG;
          } else {
            if ((instruction & (1 << 21)) == 0) {
              // xxx01011xx0xxxxxxxxxxxxxxxxxxxxx
              return A64_ADD_SUB_SHIFT_REG;
            } else {
              if ((instruction & (1 << 23)) == 0) {
                if ((instruction & (1 << 22)) == 0) {
                  // xxx01011001xxxxxxxxxxxxxxxxxxxxx
                  return A64_ADD_SUB_EXT_REG;
                } else {
                  return A64_INVALID;
                }
              } else {
                return A64_INVALID;
              }
            }
          }
        } else {
          if ((instruction & (1 << 31)) == 0) {
            if ((instruction & (1 << 24)) == 0) {
              if ((instruction & (1 << 21)) == 0) {
                if ((instruction & (1 << 15)) == 0) {
                  if ((instruction & (1 << 10)) == 0) {
                    if ((instruction & (1 << 29)) == 0) {
                      if ((instruction & (1 << 11)) == 0) {
                        if ((instruction & (1 << 23)) == 0) {
                          if ((instruction & (1 << 22)) == 0) {
                            // 0x001110000xxxxx0xxx00xxxxxxxxxx
                            return A64_SIMD_TABLE_LOOKUP;
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        // 0x001110xx0xxxxx0xxx10xxxxxxxxxx
                        return A64_SIMD_PERMUTE;
                      }
                    } else {
                      if ((instruction & (1 << 23)) == 0) {
                        if ((instruction & (1 << 22)) == 0) {
                          // 0x101110000xxxxx0xxxx0xxxxxxxxxx
                          return A64_SIMD_EXTRACT;
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    }
                  } else {
                    if ((instruction & (1 << 23)) == 0) {
                      if ((instruction & (1 << 22)) == 0) {
                        // 0xx01110000xxxxx0xxxx1xxxxxxxxxx
                        return A64_SIMD_COPY;
                      } else {
                        return A64_INVALID;
                      }
                    } else {
                      return A64_INVALID;
                    }
                  }
                } else {
                  return A64_INVALID;
                }
              } else {
                if ((instruction & (1 << 10)) == 0) {
                  if ((instruction & (1 << 11)) == 0) {
                    // 0xx01110xx1xxxxxxxxx00xxxxxxxxxx
                    return A64_SIMD_THREE_DIFF;
                  } else {
                    if ((instruction & (1 << 20)) == 0) {
                      if ((instruction & (1 << 19)) == 0) {
                        if ((instruction & (1 << 18)) == 0) {
                          if ((instruction & (1 << 17)) == 0) {
                            // 0xx01110xx10000xxxxx10xxxxxxxxxx
                            return A64_SIMD_TWO_REG;
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        if ((instruction & (1 << 30)) == 0) {
                          return A64_INVALID;
                        } else {
                          if ((instruction & (1 << 29)) == 0) {
                            if ((instruction & (1 << 23)) == 0) {
                              if ((instruction & (1 << 22)) == 0) {
                                if ((instruction & (1 << 18)) == 0) {
                                  if ((instruction & (1 << 17)) == 0) {
                                    // 010011100010100xxxxx10xxxxxxxxxx
                                    return A64_CRYPTO_AES;
                                  } else {
                                    return A64_INVALID;
                                  }
                                } else {
                                  return A64_INVALID;
                                }
                              } else {
                                return A64_INVALID;
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        }
                      }
                    } else {
                      if ((instruction & (1 << 19)) == 0) {
                        if ((instruction & (1 << 18)) == 0) {
                          if ((instruction & (1 << 17)) == 0) {
                            // 0xx01110xx11000xxxxx10xxxxxxxxxx
                            return A64_SIMD_ACROSS_LANE;
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    }
                  }
                } else {
                  // 0xx01110xx1xxxxxxxxxx1xxxxxxxxxx
                  return A64_SIMD_THREE_SAME;
                }
              }
            } else {
              if ((instruction & (1 << 10)) == 0) {
                // 0xx01111xxxxxxxxxxxxx0xxxxxxxxxx
                return A64_SIMD_X_INDEXED;
              } else {
                if ((instruction & (1 << 23)) == 0) {
                  if ((instruction & (1 << 22)) == 0) {
                    if ((instruction & (1 << 21)) == 0) {
                      if ((instruction & (1 << 20)) == 0) {
                        if ((instruction & (1 << 19)) == 0) {
                          if ((instruction & (1 << 11)) == 0) {
                            // 0xx0111100000xxxxxxx01xxxxxxxxxx
                            return A64_SIMD_MODIFIED_IMMED;
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          // 0xx0111100001xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        }
                      } else {
                        if ((instruction & (1 << 19)) == 0) {
                          // 0xx0111100010xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        } else {
                          // 0xx0111100011xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        }
                      }
                    } else {
                      if ((instruction & (1 << 20)) == 0) {
                        if ((instruction & (1 << 19)) == 0) {
                          // 0xx0111100100xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        } else {
                          // 0xx0111100101xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        }
                      } else {
                        if ((instruction & (1 << 19)) == 0) {
                          // 0xx0111100110xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        } else {
                          // 0xx0111100111xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        }
                      }
                    }
                  } else {
                    if ((instruction & (1 << 21)) == 0) {
                      if ((instruction & (1 << 20)) == 0) {
                        if ((instruction & (1 << 19)) == 0) {
                          // 0xx0111101000xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        } else {
                          // 0xx0111101001xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        }
                      } else {
                        if ((instruction & (1 << 19)) == 0) {
                          // 0xx0111101010xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        } else {
                          // 0xx0111101011xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        }
                      }
                    } else {
                      if ((instruction & (1 << 20)) == 0) {
                        if ((instruction & (1 << 19)) == 0) {
                          // 0xx0111101100xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        } else {
                          // 0xx0111101101xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        }
                      } else {
                        if ((instruction & (1 << 19)) == 0) {
                          // 0xx0111101110xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        } else {
                          // 0xx0111101111xxxxxxxx1xxxxxxxxxx
                          return A64_SIMD_SHIFT_IMMED;
                        }
                      }
                    }
                  }
                } else {
                  return A64_INVALID;
                }
              }
            }
          } else {
            return A64_INVALID;
          }
        }
      }
    }
  } else {
    if ((instruction & (1 << 27)) == 0) {
      if ((instruction & (1 << 26)) == 0) {
        if ((instruction & (1 << 25)) == 0) {
          if ((instruction & (1 << 24)) == 0) {
            // xxx10000xxxxxxxxxxxxxxxxxxxxxxxx
            return A64_ADR;
          } else {
            // xxx10001xxxxxxxxxxxxxxxxxxxxxxxx
            return A64_ADD_SUB_IMMED;
          }
        } else {
          if ((instruction & (1 << 24)) == 0) {
            if ((instruction & (1 << 23)) == 0) {
              // xxx100100xxxxxxxxxxxxxxxxxxxxxxx
              return A64_LOGICAL_IMMED;
            } else {
              // xxx100101xxxxxxxxxxxxxxxxxxxxxxx
              return A64_MOV_WIDE;
            }
          } else {
            if ((instruction & (1 << 23)) == 0) {
              // xxx100110xxxxxxxxxxxxxxxxxxxxxxx
              return A64_BFM;
            } else {
              if ((instruction & (1 << 30)) == 0) {
                if ((instruction & (1 << 29)) == 0) {
                  if ((instruction & (1 << 21)) == 0) {
                    // x00100111x0xxxxxxxxxxxxxxxxxxxxx
                    return A64_EXTR;
                  } else {
                    return A64_INVALID;
                  }
                } else {
                  return A64_INVALID;
                }
              } else {
                return A64_INVALID;
              }
            }
          }
        }
      } else {
        if ((instruction & (1 << 30)) == 0) {
          if ((instruction & (1 << 29)) == 0) {
            // x00101xxxxxxxxxxxxxxxxxxxxxxxxxx
            return A64_B_BL;
          } else {
            if ((instruction & (1 << 25)) == 0) {
              // x011010xxxxxxxxxxxxxxxxxxxxxxxxx
              return A64_CBZ_CBNZ;
            } else {
              // x011011xxxxxxxxxxxxxxxxxxxxxxxxx
              return A64_TBZ_TBNZ;
            }
          }
        } else {
          if ((instruction & (1 << 31)) == 0) {
            if ((instruction & (1 << 29)) == 0) {
              if ((instruction & (1 << 25)) == 0) {
                if ((instruction & (1 << 24)) == 0) {
                  if ((instruction & (1 << 4)) == 0) {
                    // 01010100xxxxxxxxxxxxxxxxxxx0xxxx
                    return A64_B_COND;
                  } else {
                    return A64_INVALID;
                  }
                } else {
                  return A64_INVALID;
                }
              } else {
                return A64_INVALID;
              }
            } else {
              return A64_INVALID;
            }
          } else {
            if ((instruction & (1 << 29)) == 0) {
              if ((instruction & (1 << 25)) == 0) {
                if ((instruction & (1 << 24)) == 0) {
                  if ((instruction & (1 << 23)) == 0) {
                    if ((instruction & (1 << 22)) == 0) {
                      if ((instruction & (1 << 21)) == 0) {
                        if ((instruction & (1 << 4)) == 0) {
                          if ((instruction & (1 << 3)) == 0) {
                            if ((instruction & (1 << 2)) == 0) {
                              if ((instruction & (1 << 1)) == 0) {
                                if ((instruction & (1 << 0)) == 0) {
                                  return A64_INVALID;
                                } else {
                                  // 11010100000xxxxxxxxxxxxxxxx00001
                                  return A64_SVC;
                                }
                              } else {
                                if ((instruction & (1 << 0)) == 0) {
                                  // 11010100000xxxxxxxxxxxxxxxx00010
                                  return A64_HVC;
                                } else {
                                  // 11010100000xxxxxxxxxxxxxxxx00011
                                  return A64_SMC;
                                }
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        if ((instruction & (1 << 4)) == 0) {
                          if ((instruction & (1 << 3)) == 0) {
                            if ((instruction & (1 << 2)) == 0) {
                              if ((instruction & (1 << 1)) == 0) {
                                if ((instruction & (1 << 0)) == 0) {
                                  // 11010100001xxxxxxxxxxxxxxxx00000
                                  return A64_BRK;
                                } else {
                                  return A64_INVALID;
                                }
                              } else {
                                return A64_INVALID;
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      }
                    } else {
                      if ((instruction & (1 << 21)) == 0) {
                        if ((instruction & (1 << 4)) == 0) {
                          if ((instruction & (1 << 3)) == 0) {
                            if ((instruction & (1 << 2)) == 0) {
                              if ((instruction & (1 << 1)) == 0) {
                                if ((instruction & (1 << 0)) == 0) {
                                  // 11010100010xxxxxxxxxxxxxxxx00000
                                  return A64_HLT;
                                } else {
                                  return A64_INVALID;
                                }
                              } else {
                                return A64_INVALID;
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    }
                  } else {
                    if ((instruction & (1 << 22)) == 0) {
                      if ((instruction & (1 << 21)) == 0) {
                        return A64_INVALID;
                      } else {
                        if ((instruction & (1 << 4)) == 0) {
                          if ((instruction & (1 << 3)) == 0) {
                            if ((instruction & (1 << 2)) == 0) {
                              if ((instruction & (1 << 1)) == 0) {
                                if ((instruction & (1 << 0)) == 0) {
                                  return A64_INVALID;
                                } else {
                                  // 11010100101xxxxxxxxxxxxxxxx00001
                                  return A64_DCPS1;
                                }
                              } else {
                                if ((instruction & (1 << 0)) == 0) {
                                  // 11010100101xxxxxxxxxxxxxxxx00010
                                  return A64_DCPS2;
                                } else {
                                  // 11010100101xxxxxxxxxxxxxxxx00011
                                  return A64_DCPS3;
                                }
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      }
                    } else {
                      return A64_INVALID;
                    }
                  }
                } else {
                  if ((instruction & (1 << 23)) == 0) {
                    if ((instruction & (1 << 22)) == 0) {
                      if ((instruction & (1 << 20)) == 0) {
                        if ((instruction & (1 << 21)) == 0) {
                          if ((instruction & (1 << 19)) == 0) {
                            if ((instruction & (1 << 15)) == 0) {
                              if ((instruction & (1 << 14)) == 0) {
                                if ((instruction & (1 << 18)) == 0) {
                                  if ((instruction & (1 << 17)) == 0) {
                                    return A64_INVALID;
                                  } else {
                                    if ((instruction & (1 << 16)) == 0) {
                                      return A64_INVALID;
                                    } else {
                                      if ((instruction & (1 << 13)) == 0) {
                                        return A64_INVALID;
                                      } else {
                                        if ((instruction & (1 << 12)) == 0) {
                                          if ((instruction & (1 << 4)) == 0) {
                                            return A64_INVALID;
                                          } else {
                                            if ((instruction & (1 << 3)) == 0) {
                                              return A64_INVALID;
                                            } else {
                                              if ((instruction & (1 << 2)) == 0) {
                                                return A64_INVALID;
                                              } else {
                                                if ((instruction & (1 << 1)) == 0) {
                                                  return A64_INVALID;
                                                } else {
                                                  if ((instruction & (1 << 0)) == 0) {
                                                    return A64_INVALID;
                                                  } else {
                                                    // 11010101000000110010xxxxxxx11111
                                                    return A64_HINT;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        } else {
                                          if ((instruction & (1 << 7)) == 0) {
                                            if ((instruction & (1 << 6)) == 0) {
                                              return A64_INVALID;
                                            } else {
                                              if ((instruction & (1 << 5)) == 0) {
                                                if ((instruction & (1 << 4)) == 0) {
                                                  return A64_INVALID;
                                                } else {
                                                  if ((instruction & (1 << 3)) == 0) {
                                                    return A64_INVALID;
                                                  } else {
                                                    if ((instruction & (1 << 2)) == 0) {
                                                      return A64_INVALID;
                                                    } else {
                                                      if ((instruction & (1 << 1)) == 0) {
                                                        return A64_INVALID;
                                                      } else {
                                                        if ((instruction & (1 << 0)) == 0) {
                                                          return A64_INVALID;
                                                        } else {
                                                          // 11010101000000110011xxxx01011111
                                                          return A64_CLREX;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              } else {
                                                return A64_INVALID;
                                              }
                                            }
                                          } else {
                                            if ((instruction & (1 << 6)) == 0) {
                                              if ((instruction & (1 << 5)) == 0) {
                                                if ((instruction & (1 << 4)) == 0) {
                                                  return A64_INVALID;
                                                } else {
                                                  if ((instruction & (1 << 3)) == 0) {
                                                    return A64_INVALID;
                                                  } else {
                                                    if ((instruction & (1 << 2)) == 0) {
                                                      return A64_INVALID;
                                                    } else {
                                                      if ((instruction & (1 << 1)) == 0) {
                                                        return A64_INVALID;
                                                      } else {
                                                        if ((instruction & (1 << 0)) == 0) {
                                                          return A64_INVALID;
                                                        } else {
                                                          // 11010101000000110011xxxx10011111
                                                          return A64_DSB;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              } else {
                                                if ((instruction & (1 << 4)) == 0) {
                                                  return A64_INVALID;
                                                } else {
                                                  if ((instruction & (1 << 3)) == 0) {
                                                    return A64_INVALID;
                                                  } else {
                                                    if ((instruction & (1 << 2)) == 0) {
                                                      return A64_INVALID;
                                                    } else {
                                                      if ((instruction & (1 << 1)) == 0) {
                                                        return A64_INVALID;
                                                      } else {
                                                        if ((instruction & (1 << 0)) == 0) {
                                                          return A64_INVALID;
                                                        } else {
                                                          // 11010101000000110011xxxx10111111
                                                          return A64_DMB;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            } else {
                                              if ((instruction & (1 << 5)) == 0) {
                                                if ((instruction & (1 << 4)) == 0) {
                                                  return A64_INVALID;
                                                } else {
                                                  if ((instruction & (1 << 3)) == 0) {
                                                    return A64_INVALID;
                                                  } else {
                                                    if ((instruction & (1 << 2)) == 0) {
                                                      return A64_INVALID;
                                                    } else {
                                                      if ((instruction & (1 << 1)) == 0) {
                                                        return A64_INVALID;
                                                      } else {
                                                        if ((instruction & (1 << 0)) == 0) {
                                                          return A64_INVALID;
                                                        } else {
                                                          // 11010101000000110011xxxx11011111
                                                          return A64_ISB;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              } else {
                                                return A64_INVALID;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                } else {
                                  return A64_INVALID;
                                }
                              } else {
                                if ((instruction & (1 << 13)) == 0) {
                                  if ((instruction & (1 << 12)) == 0) {
                                    if ((instruction & (1 << 4)) == 0) {
                                      return A64_INVALID;
                                    } else {
                                      if ((instruction & (1 << 3)) == 0) {
                                        return A64_INVALID;
                                      } else {
                                        if ((instruction & (1 << 2)) == 0) {
                                          return A64_INVALID;
                                        } else {
                                          if ((instruction & (1 << 1)) == 0) {
                                            return A64_INVALID;
                                          } else {
                                            if ((instruction & (1 << 0)) == 0) {
                                              return A64_INVALID;
                                            } else {
                                              // 1101010100000xxx0100xxxxxxx11111
                                              return A64_MSR_IMMED;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  } else {
                                    return A64_INVALID;
                                  }
                                } else {
                                  return A64_INVALID;
                                }
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            // 1101010100001xxxxxxxxxxxxxxxxxxx
                            return A64_SYS;
                          }
                        } else {
                          if ((instruction & (1 << 19)) == 0) {
                            return A64_INVALID;
                          } else {
                            // 1101010100101xxxxxxxxxxxxxxxxxxx
                            return A64_SYSL;
                          }
                        }
                      } else {
                        // 1101010100x1xxxxxxxxxxxxxxxxxxxx
                        return A64_MRS_MSR_REG;
                      }
                    } else {
                      return A64_INVALID;
                    }
                  } else {
                    return A64_INVALID;
                  }
                }
              } else {
                if ((instruction & (1 << 24)) == 0) {
                  if ((instruction & (1 << 23)) == 0) {
                    if ((instruction & (1 << 22)) == 0) {
                      if ((instruction & (1 << 21)) == 0) {
                        if ((instruction & (1 << 20)) == 0) {
                          return A64_INVALID;
                        } else {
                          if ((instruction & (1 << 19)) == 0) {
                            return A64_INVALID;
                          } else {
                            if ((instruction & (1 << 18)) == 0) {
                              return A64_INVALID;
                            } else {
                              if ((instruction & (1 << 17)) == 0) {
                                return A64_INVALID;
                              } else {
                                if ((instruction & (1 << 16)) == 0) {
                                  return A64_INVALID;
                                } else {
                                  if ((instruction & (1 << 15)) == 0) {
                                    if ((instruction & (1 << 14)) == 0) {
                                      if ((instruction & (1 << 13)) == 0) {
                                        if ((instruction & (1 << 12)) == 0) {
                                          if ((instruction & (1 << 11)) == 0) {
                                            if ((instruction & (1 << 10)) == 0) {
                                              if ((instruction & (1 << 4)) == 0) {
                                                if ((instruction & (1 << 3)) == 0) {
                                                  if ((instruction & (1 << 2)) == 0) {
                                                    if ((instruction & (1 << 1)) == 0) {
                                                      if ((instruction & (1 << 0)) == 0) {
                                                        // 1101011000011111000000xxxxx00000
                                                        return A64_BR;
                                                      } else {
                                                        return A64_INVALID;
                                                      }
                                                    } else {
                                                      return A64_INVALID;
                                                    }
                                                  } else {
                                                    return A64_INVALID;
                                                  }
                                                } else {
                                                  return A64_INVALID;
                                                }
                                              } else {
                                                return A64_INVALID;
                                              }
                                            } else {
                                              return A64_INVALID;
                                            }
                                          } else {
                                            return A64_INVALID;
                                          }
                                        } else {
                                          return A64_INVALID;
                                        }
                                      } else {
                                        return A64_INVALID;
                                      }
                                    } else {
                                      return A64_INVALID;
                                    }
                                  } else {
                                    return A64_INVALID;
                                  }
                                }
                              }
                            }
                          }
                        }
                      } else {
                        if ((instruction & (1 << 20)) == 0) {
                          return A64_INVALID;
                        } else {
                          if ((instruction & (1 << 19)) == 0) {
                            return A64_INVALID;
                          } else {
                            if ((instruction & (1 << 18)) == 0) {
                              return A64_INVALID;
                            } else {
                              if ((instruction & (1 << 17)) == 0) {
                                return A64_INVALID;
                              } else {
                                if ((instruction & (1 << 16)) == 0) {
                                  return A64_INVALID;
                                } else {
                                  if ((instruction & (1 << 15)) == 0) {
                                    if ((instruction & (1 << 14)) == 0) {
                                      if ((instruction & (1 << 13)) == 0) {
                                        if ((instruction & (1 << 12)) == 0) {
                                          if ((instruction & (1 << 11)) == 0) {
                                            if ((instruction & (1 << 10)) == 0) {
                                              if ((instruction & (1 << 4)) == 0) {
                                                if ((instruction & (1 << 3)) == 0) {
                                                  if ((instruction & (1 << 2)) == 0) {
                                                    if ((instruction & (1 << 1)) == 0) {
                                                      if ((instruction & (1 << 0)) == 0) {
                                                        // 1101011000111111000000xxxxx00000
                                                        return A64_BLR;
                                                      } else {
                                                        return A64_INVALID;
                                                      }
                                                    } else {
                                                      return A64_INVALID;
                                                    }
                                                  } else {
                                                    return A64_INVALID;
                                                  }
                                                } else {
                                                  return A64_INVALID;
                                                }
                                              } else {
                                                return A64_INVALID;
                                              }
                                            } else {
                                              return A64_INVALID;
                                            }
                                          } else {
                                            return A64_INVALID;
                                          }
                                        } else {
                                          return A64_INVALID;
                                        }
                                      } else {
                                        return A64_INVALID;
                                      }
                                    } else {
                                      return A64_INVALID;
                                    }
                                  } else {
                                    return A64_INVALID;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    } else {
                      if ((instruction & (1 << 21)) == 0) {
                        if ((instruction & (1 << 20)) == 0) {
                          return A64_INVALID;
                        } else {
                          if ((instruction & (1 << 19)) == 0) {
                            return A64_INVALID;
                          } else {
                            if ((instruction & (1 << 18)) == 0) {
                              return A64_INVALID;
                            } else {
                              if ((instruction & (1 << 17)) == 0) {
                                return A64_INVALID;
                              } else {
                                if ((instruction & (1 << 16)) == 0) {
                                  return A64_INVALID;
                                } else {
                                  if ((instruction & (1 << 15)) == 0) {
                                    if ((instruction & (1 << 14)) == 0) {
                                      if ((instruction & (1 << 13)) == 0) {
                                        if ((instruction & (1 << 12)) == 0) {
                                          if ((instruction & (1 << 11)) == 0) {
                                            if ((instruction & (1 << 10)) == 0) {
                                              if ((instruction & (1 << 4)) == 0) {
                                                if ((instruction & (1 << 3)) == 0) {
                                                  if ((instruction & (1 << 2)) == 0) {
                                                    if ((instruction & (1 << 1)) == 0) {
                                                      if ((instruction & (1 << 0)) == 0) {
                                                        // 1101011001011111000000xxxxx00000
                                                        return A64_RET;
                                                      } else {
                                                        return A64_INVALID;
                                                      }
                                                    } else {
                                                      return A64_INVALID;
                                                    }
                                                  } else {
                                                    return A64_INVALID;
                                                  }
                                                } else {
                                                  return A64_INVALID;
                                                }
                                              } else {
                                                return A64_INVALID;
                                              }
                                            } else {
                                              return A64_INVALID;
                                            }
                                          } else {
                                            return A64_INVALID;
                                          }
                                        } else {
                                          return A64_INVALID;
                                        }
                                      } else {
                                        return A64_INVALID;
                                      }
                                    } else {
                                      return A64_INVALID;
                                    }
                                  } else {
                                    return A64_INVALID;
                                  }
                                }
                              }
                            }
                          }
                        }
                      } else {
                        return A64_INVALID;
                      }
                    }
                  } else {
                    if ((instruction & (1 << 22)) == 0) {
                      if ((instruction & (1 << 21)) == 0) {
                        if ((instruction & (1 << 20)) == 0) {
                          return A64_INVALID;
                        } else {
                          if ((instruction & (1 << 19)) == 0) {
                            return A64_INVALID;
                          } else {
                            if ((instruction & (1 << 18)) == 0) {
                              return A64_INVALID;
                            } else {
                              if ((instruction & (1 << 17)) == 0) {
                                return A64_INVALID;
                              } else {
                                if ((instruction & (1 << 16)) == 0) {
                                  return A64_INVALID;
                                } else {
                                  if ((instruction & (1 << 15)) == 0) {
                                    if ((instruction & (1 << 14)) == 0) {
                                      if ((instruction & (1 << 13)) == 0) {
                                        if ((instruction & (1 << 12)) == 0) {
                                          if ((instruction & (1 << 11)) == 0) {
                                            if ((instruction & (1 << 10)) == 0) {
                                              if ((instruction & (1 << 9)) == 0) {
                                                return A64_INVALID;
                                              } else {
                                                if ((instruction & (1 << 8)) == 0) {
                                                  return A64_INVALID;
                                                } else {
                                                  if ((instruction & (1 << 7)) == 0) {
                                                    return A64_INVALID;
                                                  } else {
                                                    if ((instruction & (1 << 6)) == 0) {
                                                      return A64_INVALID;
                                                    } else {
                                                      if ((instruction & (1 << 5)) == 0) {
                                                        return A64_INVALID;
                                                      } else {
                                                        if ((instruction & (1 << 4)) == 0) {
                                                          if ((instruction & (1 << 3)) == 0) {
                                                            if ((instruction & (1 << 2)) == 0) {
                                                              if ((instruction & (1 << 1)) == 0) {
                                                                if ((instruction & (1 << 0)) == 0) {
                                                                  // 11010110100111110000001111100000
                                                                  return A64_ERET;
                                                                } else {
                                                                  return A64_INVALID;
                                                                }
                                                              } else {
                                                                return A64_INVALID;
                                                              }
                                                            } else {
                                                              return A64_INVALID;
                                                            }
                                                          } else {
                                                            return A64_INVALID;
                                                          }
                                                        } else {
                                                          return A64_INVALID;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            } else {
                                              return A64_INVALID;
                                            }
                                          } else {
                                            return A64_INVALID;
                                          }
                                        } else {
                                          return A64_INVALID;
                                        }
                                      } else {
                                        return A64_INVALID;
                                      }
                                    } else {
                                      return A64_INVALID;
                                    }
                                  } else {
                                    return A64_INVALID;
                                  }
                                }
                              }
                            }
                          }
                        }
                      } else {
                        if ((instruction & (1 << 20)) == 0) {
                          return A64_INVALID;
                        } else {
                          if ((instruction & (1 << 19)) == 0) {
                            return A64_INVALID;
                          } else {
                            if ((instruction & (1 << 18)) == 0) {
                              return A64_INVALID;
                            } else {
                              if ((instruction & (1 << 17)) == 0) {
                                return A64_INVALID;
                              } else {
                                if ((instruction & (1 << 16)) == 0) {
                                  return A64_INVALID;
                                } else {
                                  if ((instruction & (1 << 15)) == 0) {
                                    if ((instruction & (1 << 14)) == 0) {
                                      if ((instruction & (1 << 13)) == 0) {
                                        if ((instruction & (1 << 12)) == 0) {
                                          if ((instruction & (1 << 11)) == 0) {
                                            if ((instruction & (1 << 10)) == 0) {
                                              if ((instruction & (1 << 9)) == 0) {
                                                return A64_INVALID;
                                              } else {
                                                if ((instruction & (1 << 8)) == 0) {
                                                  return A64_INVALID;
                                                } else {
                                                  if ((instruction & (1 << 7)) == 0) {
                                                    return A64_INVALID;
                                                  } else {
                                                    if ((instruction & (1 << 6)) == 0) {
                                                      return A64_INVALID;
                                                    } else {
                                                      if ((instruction & (1 << 5)) == 0) {
                                                        return A64_INVALID;
                                                      } else {
                                                        if ((instruction & (1 << 4)) == 0) {
                                                          if ((instruction & (1 << 3)) == 0) {
                                                            if ((instruction & (1 << 2)) == 0) {
                                                              if ((instruction & (1 << 1)) == 0) {
                                                                if ((instruction & (1 << 0)) == 0) {
                                                                  // 11010110101111110000001111100000
                                                                  return A64_DRPS;
                                                                } else {
                                                                  return A64_INVALID;
                                                                }
                                                              } else {
                                                                return A64_INVALID;
                                                              }
                                                            } else {
                                                              return A64_INVALID;
                                                            }
                                                          } else {
                                                            return A64_INVALID;
                                                          }
                                                        } else {
                                                          return A64_INVALID;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            } else {
                                              return A64_INVALID;
                                            }
                                          } else {
                                            return A64_INVALID;
                                          }
                                        } else {
                                          return A64_INVALID;
                                        }
                                      } else {
                                        return A64_INVALID;
                                      }
                                    } else {
                                      return A64_INVALID;
                                    }
                                  } else {
                                    return A64_INVALID;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    } else {
                      return A64_INVALID;
                    }
                  }
                } else {
                  return A64_INVALID;
                }
              }
            } else {
              return A64_INVALID;
            }
          }
        }
      }
    } else {
      if ((instruction & (1 << 25)) == 0) {
        if ((instruction & (1 << 29)) == 0) {
          if ((instruction & (1 << 24)) == 0) {
            // xx011x00xxxxxxxxxxxxxxxxxxxxxxxx
            return A64_LDR_LIT;
          } else {
            return A64_INVALID;
          }
        } else {
          if ((instruction & (1 << 24)) == 0) {
            if ((instruction & (1 << 21)) == 0) {
              // xx111x00xx0xxxxxxxxxxxxxxxxxxxxx
              return A64_LDR_STR_IMMED;
            } else {
              if ((instruction & (1 << 11)) == 0) {
                return A64_INVALID;
              } else {
                if ((instruction & (1 << 10)) == 0) {
                  // xx111x00xx1xxxxxxxxx10xxxxxxxxxx
                  return A64_LDR_STR_REG;
                } else {
                  return A64_INVALID;
                }
              }
            }
          } else {
            // xx111x01xxxxxxxxxxxxxxxxxxxxxxxx
            return A64_LDR_STR_UNSIGNED_IMMED;
          }
        }
      } else {
        if ((instruction & (1 << 26)) == 0) {
          if ((instruction & (1 << 24)) == 0) {
            if ((instruction & (1 << 23)) == 0) {
              if ((instruction & (1 << 22)) == 0) {
                if ((instruction & (1 << 21)) == 0) {
                  if ((instruction & (1 << 15)) == 0) {
                    if ((instruction & (1 << 14)) == 0) {
                      if ((instruction & (1 << 13)) == 0) {
                        if ((instruction & (1 << 12)) == 0) {
                          if ((instruction & (1 << 11)) == 0) {
                            if ((instruction & (1 << 10)) == 0) {
                              // xxx11010000xxxxx000000xxxxxxxxxx
                              return A64_ADC_SBC;
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    } else {
                      return A64_INVALID;
                    }
                  } else {
                    return A64_INVALID;
                  }
                } else {
                  return A64_INVALID;
                }
              } else {
                if ((instruction & (1 << 29)) == 0) {
                  return A64_INVALID;
                } else {
                  if ((instruction & (1 << 21)) == 0) {
                    if ((instruction & (1 << 11)) == 0) {
                      if ((instruction & (1 << 10)) == 0) {
                        if ((instruction & (1 << 4)) == 0) {
                          // xx111010010xxxxxxxxx00xxxxx0xxxx
                          return A64_CCMP_CCMN_REG;
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    } else {
                      if ((instruction & (1 << 10)) == 0) {
                        if ((instruction & (1 << 4)) == 0) {
                          // xx111010010xxxxxxxxx10xxxxx0xxxx
                          return A64_CCMP_CCMN_IMMED;
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    }
                  } else {
                    return A64_INVALID;
                  }
                }
              }
            } else {
              if ((instruction & (1 << 29)) == 0) {
                if ((instruction & (1 << 22)) == 0) {
                  if ((instruction & (1 << 21)) == 0) {
                    // xx011010100xxxxxxxxxxxxxxxxxxxxx
                    return A64_COND_SELECT;
                  } else {
                    return A64_INVALID;
                  }
                } else {
                  if ((instruction & (1 << 30)) == 0) {
                    if ((instruction & (1 << 21)) == 0) {
                      // x0011010110xxxxxxxxxxxxxxxxxxxxx
                      return A64_DATA_PROC_REG2;
                    } else {
                      return A64_INVALID;
                    }
                  } else {
                    if ((instruction & (1 << 21)) == 0) {
                      if ((instruction & (1 << 20)) == 0) {
                        if ((instruction & (1 << 19)) == 0) {
                          if ((instruction & (1 << 18)) == 0) {
                            if ((instruction & (1 << 17)) == 0) {
                              if ((instruction & (1 << 16)) == 0) {
                                // x101101011000000xxxxxxxxxxxxxxxx
                                return A64_DATA_PROC_REG1;
                              } else {
                                return A64_INVALID;
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    } else {
                      return A64_INVALID;
                    }
                  }
                }
              } else {
                return A64_INVALID;
              }
            }
          } else {
            if ((instruction & (1 << 30)) == 0) {
              if ((instruction & (1 << 29)) == 0) {
                // x0011011xxxxxxxxxxxxxxxxxxxxxxxx
                return A64_DATA_PROC_REG3;
              } else {
                return A64_INVALID;
              }
            } else {
              return A64_INVALID;
            }
          }
        } else {
          if ((instruction & (1 << 30)) == 0) {
            if ((instruction & (1 << 29)) == 0) {
              if ((instruction & (1 << 24)) == 0) {
                if ((instruction & (1 << 21)) == 0) {
                  // x0011110xx0xxxxxxxxxxxxxxxxxxxxx
                  return A64_FLOAT_CVT_FIXED;
                } else {
                  if ((instruction & (1 << 11)) == 0) {
                    if ((instruction & (1 << 10)) == 0) {
                      if ((instruction & (1 << 12)) == 0) {
                        if ((instruction & (1 << 14)) == 0) {
                          if ((instruction & (1 << 15)) == 0) {
                            if ((instruction & (1 << 13)) == 0) {
                              // x0011110xx1xxxxx000000xxxxxxxxxx
                              return A64_FLOAT_CVT_INT;
                            } else {
                              if ((instruction & (1 << 31)) == 0) {
                                // 00011110xx1xxxxx001000xxxxxxxxxx
                                return A64_FCMP;
                              } else {
                                return A64_INVALID;
                              }
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          if ((instruction & (1 << 31)) == 0) {
                            if ((instruction & (1 << 13)) == 0) {
                              // 00011110xx1xxxxxx10000xxxxxxxxxx
                              return A64_FLOAT_REG1;
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        }
                      } else {
                        if ((instruction & (1 << 31)) == 0) {
                          if ((instruction & (1 << 9)) == 0) {
                            if ((instruction & (1 << 8)) == 0) {
                              if ((instruction & (1 << 7)) == 0) {
                                if ((instruction & (1 << 6)) == 0) {
                                  if ((instruction & (1 << 5)) == 0) {
                                    // 00011110xx1xxxxxxxx10000000xxxxx
                                    return A64_FMOV_IMMED;
                                  } else {
                                    return A64_INVALID;
                                  }
                                } else {
                                  return A64_INVALID;
                                }
                              } else {
                                return A64_INVALID;
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      }
                    } else {
                      if ((instruction & (1 << 31)) == 0) {
                        // 00011110xx1xxxxxxxxx01xxxxxxxxxx
                        return A64_FCCMP;
                      } else {
                        return A64_INVALID;
                      }
                    }
                  } else {
                    if ((instruction & (1 << 31)) == 0) {
                      if ((instruction & (1 << 10)) == 0) {
                        // 00011110xx1xxxxxxxxx10xxxxxxxxxx
                        return A64_FLOAT_REG2;
                      } else {
                        // 00011110xx1xxxxxxxxx11xxxxxxxxxx
                        return A64_FCSEL;
                      }
                    } else {
                      return A64_INVALID;
                    }
                  }
                }
              } else {
                if ((instruction & (1 << 31)) == 0) {
                  // 00011111xxxxxxxxxxxxxxxxxxxxxxxx
                  return A64_FLOAT_REG3;
                } else {
                  return A64_INVALID;
                }
              }
            } else {
              return A64_INVALID;
            }
          } else {
            if ((instruction & (1 << 31)) == 0) {
              if ((instruction & (1 << 24)) == 0) {
                if ((instruction & (1 << 21)) == 0) {
                  if ((instruction & (1 << 29)) == 0) {
                    if ((instruction & (1 << 23)) == 0) {
                      if ((instruction & (1 << 22)) == 0) {
                        if ((instruction & (1 << 15)) == 0) {
                          if ((instruction & (1 << 11)) == 0) {
                            if ((instruction & (1 << 10)) == 0) {
                              // 01011110000xxxxx0xxx00xxxxxxxxxx
                              return A64_CRYPTO_SHA_REG3;
                            } else {
                              if ((instruction & (1 << 14)) == 0) {
                                if ((instruction & (1 << 13)) == 0) {
                                  if ((instruction & (1 << 12)) == 0) {
                                    // 01011110000xxxxx000001xxxxxxxxxx
                                    return A64_SIMD_SCALAR_COPY;
                                  } else {
                                    return A64_INVALID;
                                  }
                                } else {
                                  return A64_INVALID;
                                }
                              } else {
                                return A64_INVALID;
                              }
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      } else {
                        return A64_INVALID;
                      }
                    } else {
                      return A64_INVALID;
                    }
                  } else {
                    return A64_INVALID;
                  }
                } else {
                  if ((instruction & (1 << 10)) == 0) {
                    if ((instruction & (1 << 11)) == 0) {
                      // 01x11110xx1xxxxxxxxx00xxxxxxxxxx
                      return A64_SIMD_SCALAR_THREE_DIFF;
                    } else {
                      if ((instruction & (1 << 20)) == 0) {
                        if ((instruction & (1 << 19)) == 0) {
                          if ((instruction & (1 << 18)) == 0) {
                            if ((instruction & (1 << 17)) == 0) {
                              // 01x11110xx10000xxxxx10xxxxxxxxxx
                              return A64_SIMD_SCALAR_TWO_REG;
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          if ((instruction & (1 << 29)) == 0) {
                            if ((instruction & (1 << 23)) == 0) {
                              if ((instruction & (1 << 22)) == 0) {
                                if ((instruction & (1 << 18)) == 0) {
                                  if ((instruction & (1 << 17)) == 0) {
                                    // 010111100010100xxxxx10xxxxxxxxxx
                                    return A64_CRYPTO_SHA_REG2;
                                  } else {
                                    return A64_INVALID;
                                  }
                                } else {
                                  return A64_INVALID;
                                }
                              } else {
                                return A64_INVALID;
                              }
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        }
                      } else {
                        if ((instruction & (1 << 19)) == 0) {
                          if ((instruction & (1 << 18)) == 0) {
                            if ((instruction & (1 << 17)) == 0) {
                              // 01x11110xx11000xxxxx10xxxxxxxxxx
                              return A64_SIMD_SCALAR_PAIRWISE;
                            } else {
                              return A64_INVALID;
                            }
                          } else {
                            return A64_INVALID;
                          }
                        } else {
                          return A64_INVALID;
                        }
                      }
                    }
                  } else {
                    // 01x11110xx1xxxxxxxxxx1xxxxxxxxxx
                    return A64_SIMD_SCALAR_THREE_SAME;
                  }
                }
              } else {
                if ((instruction & (1 << 10)) == 0) {
                  // 01x11111xxxxxxxxxxxxx0xxxxxxxxxx
                  return A64_SIMD_SCALAR_X_INDEXED;
                } else {
                  if ((instruction & (1 << 23)) == 0) {
                    // 01x111110xxxxxxxxxxxx1xxxxxxxxxx
                    return A64_SIMD_SCALAR_SHIFT_IMMED;
                  } else {
                    return A64_INVALID;
                  }
                }
              }
            } else {
              return A64_INVALID;
            }
          }
        }
      }
    }
  }
}
