int __fastcall sub_811D5E0(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  __int16 v3; // r0@3
  int v4; // r0@7
  unsigned __int8 v5; // r0@8

  v1 = a1;
  v2 = *(_WORD *)(a1 + 20);
  if ( !*(_WORD *)(a1 + 20) || (*(_WORD *)(a1 + 20) = v2 - 1, !((v2 - 1) << 16)) )
  {
    *(_WORD *)(a1 + 20) = *(_WORD *)(a1 + 12);
    v3 = *(_WORD *)(a1 + 22) - *(_WORD *)(a1 + 18);
    *(_WORD *)(v1 + 22) = v3;
    if ( v3 & 0x8000 )
      *(_WORD *)(v1 + 22) = 0;
    BlendPalettes(0xFFFFFFFF, *(_BYTE *)(v1 + 22), 11627);
  }
  if ( !*(_WORD *)(v1 + 22) )
  {
    v4 = *(_WORD *)(v1 + 14) - 1;
    *(_WORD *)(v1 + 14) = v4;
    if ( v4 << 16 )
    {
      *(_WORD *)(v1 + 20) = *(_WORD *)(v1 + 10);
      *(_WORD *)(v1 + 8) = 0;
    }
    else
    {
      v5 = FindTaskIdByFunc((int)sub_811D54C);
      DestroyTask(v5);
    }
  }
  return 0;
}
