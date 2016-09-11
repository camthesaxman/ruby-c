int __fastcall sub_8060320(int a1, _WORD *a2, _WORD *a3, __int16 a4, __int16 a5)
{
  _WORD *v5; // r4@1
  char *v6; // r5@1
  int v7; // r1@1
  int v8; // r1@5
  int v10; // [sp+10h] [bp-4h]@0

  v5 = a2;
  v6 = (char *)&gUnknown_083756A4 + (4 * a1 & 0x3FF);
  v7 = *(_WORD *)v6;
  if ( v7 > 0 )
    *v5 += a4;
  if ( v7 < 0 )
    *v5 -= a4;
  v8 = *((_WORD *)v6 + 1);
  if ( v8 > 0 )
    *a3 += a5;
  if ( v8 < 0 )
    *a3 -= a5;
  return v10;
}
