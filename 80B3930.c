int __fastcall sub_80B3930(unsigned __int16 a1, unsigned __int8 a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  char *v5; // r2@1
  int v6; // r6@3
  char *v7; // r2@3
  int v9; // [sp+1Ch] [bp-4h]@0

  v3 = a3;
  v4 = a2;
  v5 = &gStringVar1;
  if ( v3 )
  {
    gStringVar1 = -4;
    byte_20231CD = 1;
    byte_20231CE = 2;
    v5 = &byte_20231CF;
  }
  v6 = 32 * a1;
  StringCopy(v5, &asc_83EB6C5[32 * a1]);
  sub_8072A18((int)&gStringVar1, 112, 8 * v4, 88, 1);
  v7 = &gStringVar1;
  if ( v3 )
    v7 = &byte_20231CF;
  if ( *(_WORD *)((char *)&gDecorations + v6 + 20) == 10000 )
  {
    sub_80B7B34(25, v4, v3);
  }
  else
  {
    sub_80B79F8(v7, *(_WORD *)((char *)&gDecorations + v6 + 20), 4);
    sub_80729D8((int)&gStringVar1, -54, 8 * v4, 1u);
  }
  return v9;
}
