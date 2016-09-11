int sub_80E9AD4()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E6D54);
  v0 = 0;
  do
  {
    sub_80E9C74(v0);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0xF );
  return v2;
}
