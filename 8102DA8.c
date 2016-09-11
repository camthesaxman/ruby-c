int sub_8102DA8()
{
  unsigned int v0; // r4@1
  int v1; // r0@2
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (unsigned __int8)CreateTask((int)sub_8102E68, 2);
    HIWORD(dword_3004B20[10 * v1 + 9]) = v0;
    *(_BYTE *)(v0 + 33554490) = v1;
    call_via_r5(v1);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 2 );
  return v3;
}
