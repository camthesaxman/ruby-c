int __fastcall sub_8089354(int a1)
{
  int v1; // r5@1
  int v2; // r1@1
  char *v3; // r4@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 12);
  if ( !*(_WORD *)(a1 + 12) || (*(_WORD *)(a1 + 12) = v2 - 1, !((v2 - 1) << 16)) )
  {
    v3 = &gSprites[68 * LOBYTE(dword_30048A0[9 * v202E85D + 1])];
    sub_8088FFC(*(_BYTE *)(a1 + 10), 0x40u);
    *((_WORD *)v3 + 16) += *((_WORD *)v3 + 18);
    *((_WORD *)v3 + 17) += *((_WORD *)v3 + 19);
    *((_WORD *)v3 + 18) = 0;
    *((_WORD *)v3 + 19) = 0;
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 12) = 0;
  }
  return v5;
}
