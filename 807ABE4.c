int RunTasks()
{
  int v0; // r0@1
  int *v1; // r4@2
  int v3; // [sp+8h] [bp-4h]@0

  v0 = (unsigned __int8)FindFirstActiveTask();
  if ( v0 != 16 )
  {
    do
    {
      v1 = &dword_3004B20[10 * v0];
      call_via_r1(v0, *v1);
      v0 = *((_BYTE *)v1 + 6);
    }
    while ( v0 != 255 );
  }
  return v3;
}
