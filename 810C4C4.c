int __fastcall sub_810C4C4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    sub_810C2B0();
    sub_8136130(8 * v203855E + 33709868, sub_810B96C);
    DestroyTask(v1);
  }
  return v3;
}
