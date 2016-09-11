int __fastcall sub_805A874(int a1)
{
  int v1; // r6@1
  int *v2; // r4@2

  v1 = a1;
  sub_805A954(a1);
  if ( gSprites[68 * v202E85C + 63] & 0x10 )
  {
    v2 = &dword_30048A0[9 * v202E85D];
    sub_805B980(v2, *(_WORD *)(v1 + 36) & 0xFF);
    FieldObjectTurn(v2, (unsigned int)*((_BYTE *)v2 + 24) >> 4);
    if ( v202E858 & 8 )
      sub_8127F28(BYTE2(dword_30048A0[9 * v202E85D + 6]), 0, 0);
    *(_WORD *)&gSprites[68 * v202E85C + 36] = 0;
    *(_WORD *)&gSprites[68 * v202E85C + 38] = 0;
    ++*(_WORD *)(v1 + 8);
  }
  return 0;
}
