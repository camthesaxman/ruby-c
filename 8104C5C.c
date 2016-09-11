int sub_8104C5C()
{
  unsigned __int8 v0; // r0@1
  int *v1; // r0@1
  unsigned int v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v0 = CreateTask((int)sub_8104E74, 3);
  v200003D = v0;
  v1 = &dword_3004B20[10 * v0];
  *((_WORD *)v1 + 5) = -1;
  v2 = 4;
  do
  {
    *((_WORD *)v1 + v2 + 4) = 64;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  return v4;
}
