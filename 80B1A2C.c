int sub_80B1A2C()
{
  unsigned __int8 v0; // r0@1
  int v1; // r5@1
  int *v2; // r4@1

  v0 = CreateTask((int)c3_08130B10, 10);
  v1 = v0;
  v2 = &dword_3004B20[10 * v0];
  *((_WORD *)v2 + 5) = 1;
  *((_WORD *)v2 + 6) = (unsigned __int8)IndexOfSpritePaletteTag(0xABE2u);
  return v1;
}
