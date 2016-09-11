int sub_8048AB4()
{
  int v0; // r0@1
  unsigned __int8 v1; // r0@1
  unsigned __int8 v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v0 = sub_8049DE0();
  sub_804AB30(v0);
  sub_8049ED4(0);
  sub_8049ED4(1);
  v1 = (*(_BYTE *)dword_3004824)++;
  v4000018 = v1;
  v2 = (*(_BYTE *)(dword_3004824 + 1))--;
  v400001C = v2;
  RunTasks(v2);
  AnimateSprites();
  v3 = BuildOamBuffer();
  UpdatePaletteFade(v3);
  return v5;
}
