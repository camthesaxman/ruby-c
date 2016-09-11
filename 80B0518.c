int sub_80B0518()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v2019212 = CreateTask((int)sub_80B05FC, 30);
  v0 = 0;
  do
  {
    sub_80B0548(v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  return v2;
}
