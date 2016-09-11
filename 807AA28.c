int ResetTasks()
{
  int v0; // r4@1
  int v1; // r0@2
  int *v2; // r2@2
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 40 * v0;
    v2 = &dword_3004B20[10 * v0];
    *((_BYTE *)v2 + 4) = 0;
    *v2 = (int)TaskDummy;
    *((_BYTE *)v2 + 5) = v0;
    LOBYTE(v0) = v0 + 1;
    *((_BYTE *)v2 + 6) = v0;
    *((_BYTE *)v2 + 7) = -1;
    memset(&byte_3004B28[v1], 0, 32);
    v0 = (unsigned __int8)v0;
  }
  while ( (unsigned __int8)v0 <= 0xFu );
  byte_3004B25 = -2;
  byte_3004D7E = -1;
  return v4;
}
