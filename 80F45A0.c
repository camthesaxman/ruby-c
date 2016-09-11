int __fastcall sub_80F45A0(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r2@2
  int v6; // [sp+10h] [bp-4h]@0

  v2 = a2;
  v3 = (a1 << 16 >> 14) + 0x2000000;
  if ( (unsigned int)*(_BYTE *)((a1 << 16 >> 14) + 0x200893F) << 25 >> 31 )
  {
    sub_80F4428();
    v4 = *(_BYTE *)(v3 + 35133);
    if ( v4 == 14 )
      sub_8072C74(24 * v2 + 33589481, (int)&gUnknown_08410E7E, 0x40u, 0);
    else
      sub_8072C74(24 * v2 + 33589481, 9 * v4 + 33784804, 0x40u, 0);
    *(_BYTE *)(v2 + 33589559) = 1;
  }
  else
  {
    sub_8072C74((a2 << 6) + 33589289, (int)&gEmptyString_81E72B0, 0x68u, 0);
    sub_8072C74(24 * v2 + 33589481, (int)&gEmptyString_81E72B0, 0x40u, 0);
    *(_BYTE *)(v2 + 33589559) = 0;
  }
  return v6;
}
