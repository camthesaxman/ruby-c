int __fastcall sub_80F9A8C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v202F390 |= 0x80u;
    sub_806AFAC(dword_3004B20[10 * a1 + 2], 0);
    DestroyTask(v1);
  }
  return v3;
}
