int sub_8103F70()
{
  int v0; // r0@1
  int *v1; // r1@1
  int v2; // r3@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)CreateTask((int)sub_8103FE8, 6);
  v1 = &dword_3004B20[10 * v0];
  *((_WORD *)v1 + 7) = 1;
  call_via_r4(v0, v1, 1, v2);
  return v4;
}
