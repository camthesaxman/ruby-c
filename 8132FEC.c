int sub_8132FEC()
{
  unsigned int v0; // r5@1
  char *v1; // r4@1
  int v2; // r2@2
  int v3; // r3@2
  int v5; // [sp+Ch] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E7240);
  v0 = 0;
  v1 = &gUnknown_08402CF8;
  do
  {
    v2 = (unsigned __int8)byte_8402CFA[4 * v0];
    v3 = (unsigned __int8)v1[3];
    MenuDrawTextWindow(*v1, byte_8402CF9[4 * v0]);
    v1 += 4;
    ++v0;
  }
  while ( v0 <= 3 );
  BasicInitMenuWindow((int)&gWindowConfig_81E6CE4);
  return v5;
}
