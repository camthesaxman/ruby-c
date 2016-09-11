int sub_80F7C90()
{
  int v0; // r1@1
  signed __int16 v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int16)sub_80EB8EC();
  if ( v0 == 0xFFFF )
  {
    v1 = 0;
  }
  else
  {
    sub_80EB3FC(&gStringVar1, v0);
    v1 = 1;
  }
  v202E8DC = v1;
  return v3;
}
