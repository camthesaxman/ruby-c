int __fastcall sub_80AB960(unsigned __int8 a1)
{
  int *v1; // r1@2
  int v3; // [sp+0h] [bp-4h]@0

  v202F390 &= 0x7Fu;
  if ( !(v202F38F & 0x80) )
  {
    v1 = &dword_3004B20[10 * a1];
    *((_WORD *)v1 + 4) = 0;
    *((_WORD *)v1 + 5) = 0;
    *v1 = (int)sub_80AB9A0;
  }
  return v3;
}
