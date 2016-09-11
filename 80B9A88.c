int __fastcall sub_80B9A88(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  unsigned int v3; // r2@7
  char v4; // r0@10
  unsigned int v5; // r2@10
  char *v6; // r3@10
  unsigned int v7; // r0@13
  unsigned int v8; // r2@13
  char *v9; // r3@13
  int v11; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)GetLinkPlayerCount();
  if ( v2 == 3 )
  {
    v4 = GetLinkPlayerTrainerId(0);
    v5 = 0;
    v6 = (char *)&gUnknown_083D028A + 3 * (v4 & 1);
    do
      *(_BYTE *)(v1 + v5++) = *v6++;
    while ( v5 <= 2 );
  }
  else if ( v2 > 3 )
  {
    if ( v2 == 4 )
    {
      v7 = GetLinkPlayerTrainerId(0) % 9u;
      v8 = 0;
      v9 = (char *)&gUnknown_083D0290 + 4 * v7;
      do
        *(_BYTE *)(v1 + v8++) = *v9++;
      while ( v8 <= 3 );
    }
  }
  else if ( v2 == 2 )
  {
    v3 = 0;
    do
    {
      *(_BYTE *)(v1 + v3) = gUnknown_083D0288[v3];
      ++v3;
    }
    while ( v3 <= 1 );
  }
  return v11;
}
