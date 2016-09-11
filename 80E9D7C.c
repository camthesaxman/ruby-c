int sub_80E9D7C()
{
  unsigned int v0; // r6@2
  unsigned __int16 v1; // r0@2
  int v2; // r4@4
  unsigned int i; // r5@4
  int v5; // [sp+10h] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E6D54);
  if ( v20011C0 >= 0 )
  {
    v0 = v20011C0 & 0xFFFF;
    v1 = v20011B5 + 4;
  }
  else
  {
    v0 = 0xFFFF * v20011C0 & 0xFFFF;
    v1 = v20011B5 + v20011C0;
  }
  v2 = v1;
  for ( i = 0; i < v0; i = (i + 1) & 0xFFFF )
  {
    sub_80E9940(33598921, v2);
    v2 = (v2 + 1) & 0xFFFF;
  }
  return v5;
}
