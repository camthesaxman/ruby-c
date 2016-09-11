int sub_806AEDC()
{
  char *v0; // r5@1
  signed int v1; // r6@1
  int v2; // r0@2
  int v3; // r0@3
  int v5; // [sp+10h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  v0 = (char *)&gUnknown_08376BB4 + 48 * v202E8FA;
  v1 = 0;
  do
  {
    v2 = sub_800142C(8 * (unsigned __int8)*v0, 8 * (unsigned __int8)v0[1], *((_WORD **)v0 + 1), 0, 32 * v1 | 0x200);
    v0 += 8;
    ++v1;
  }
  while ( v1 <= 5 );
  v3 = RunTasks(v2);
  UpdatePaletteFade(v3);
  return v5;
}
