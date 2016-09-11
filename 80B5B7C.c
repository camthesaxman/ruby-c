int GetNamingScreenParameters()
{
  unsigned __int8 v0; // r0@1
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = FindTaskIdByFunc((int)NamingScreenDummyTask);
  v1 = v0;
  v2 = &dword_3004B20[10 * v0];
  v2000001 = *((_WORD *)v2 + 4);
  v200003E = *((_WORD *)v2 + 5);
  v2000040 = *((_WORD *)v2 + 6);
  v2000044 = (*((_WORD *)v2 + 7) << 16) | *((_WORD *)v2 + 8);
  LoadWordFromTwoHalfwords((int)v2 + 18, (int *)0x2000038);
  LoadWordFromTwoHalfwords((int)v2 + 22, (int *)0x2000048);
  DestroyTask(v1);
  return v4;
}
