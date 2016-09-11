_BOOL4 __fastcall warp_data_is_not_neg_1(int a1)
{
  return *(_BYTE *)a1 == -1
      && *(_BYTE *)(a1 + 1) == -1
      && *(_BYTE *)(a1 + 2) == -1
      && *(_WORD *)(a1 + 4) == -1
      && *(_WORD *)(a1 + 6) == -1;
}
