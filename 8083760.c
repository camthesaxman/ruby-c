int __fastcall sub_8083760(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int *v4; // r1@3
  int (*v5)(); // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( (unsigned __int8)GetLinkPlayerCount_2() > 1u )
  {
    if ( (unsigned __int8)IsLinkMaster() == 1 )
    {
      v4 = &dword_3004B20[10 * v2];
      v5 = sub_80837B4;
    }
    else
    {
      v4 = &dword_3004B20[10 * v3];
      v5 = sub_80837EC;
    }
    *v4 = (int)v5;
  }
  return v7;
}
