int sub_8116CF8()
{
  unsigned int v0; // r2@1
  unsigned int v1; // r2@3
  unsigned int v2; // r2@5
  int v4; // [sp+0h] [bp-4h]@0

  v2019008 = 0;
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33656844) = 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 5 );
  v1 = 0;
  do
  {
    *(_BYTE *)(v1 + 33656850) = 0;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 3 );
  v2 = 0;
  do
  {
    *(_BYTE *)(v2 + 33656854) = 0;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 2 );
  sub_8117C60(1, 255);
  return v4;
}
