int sub_80E6630()
{
  int v0; // r1@1
  char *v1; // r5@2
  int v2; // r3@2
  unsigned __int8 v3; // r7@2
  int v4; // r4@3
  int v6; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = &gUnknown_083DB6B2[16 * v0];
    v2 = 0;
    v3 = v0 + 1;
    if ( (unsigned __int8)*v1 != 255 )
    {
      v4 = 14 * v0;
      do
      {
        if ( v1[v2] )
          *(_BYTE *)(v2 + v4 + 33558592) = v1[v2] + 70;
        else
          *(_BYTE *)(v2 + v4 + 33558592) = 0;
        v2 = (v2 + 1) & 0xFF;
      }
      while ( (unsigned __int8)v1[v2] != 255 );
    }
    v0 = (unsigned __int8)(v0 + 1);
  }
  while ( v3 <= 3u );
  return v6;
}
