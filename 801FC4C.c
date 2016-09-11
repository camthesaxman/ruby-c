int atk1D_jumpifsecondarystatus()
{
  int v0; // r1@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 88 * (unsigned __int8)sub_8015150(*(_BYTE *)(v2024C10 + 1));
  if ( *(_DWORD *)(v0 + 0x2024AD0) & (*(_BYTE *)(v2024C10 + 2)
                                    + (*(_BYTE *)(v2024C10 + 3) << 8)
                                    + (*(_BYTE *)(v2024C10 + 4) << 16)
                                    + (*(_BYTE *)(v2024C10 + 5) << 24))
    && *(_WORD *)(v0 + 33704616) )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 6)
             + (*(_BYTE *)(v2024C10 + 7) << 8)
             + (*(_BYTE *)(v2024C10 + 8) << 16)
             + (*(_BYTE *)(v2024C10 + 9) << 24);
  }
  else
  {
    v2024C10 += 10;
  }
  return v2;
}
