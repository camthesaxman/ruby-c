signed int sub_8090FF4()
{
  unsigned int v0; // r0@1
  unsigned int v1; // r4@2
  signed int v2; // r0@4
  unsigned int v3; // r4@5
  signed int v4; // r0@7
  unsigned int v5; // r4@8

  v0 = 0;
  while ( 1 )
  {
    v1 = (v0 + 1) & 0xFFFF;
    if ( !(sub_8090D90(v1, 1u) << 24) )
      break;
    v0 = v1;
    if ( v1 > 0x95 )
    {
      v2 = 152;
      while ( 1 )
      {
        v3 = (v2 + 1) & 0xFFFF;
        if ( !(sub_8090D90(v3, 1u) << 24) )
          break;
        v2 = v3;
        if ( v3 > 0xF9 )
        {
          v4 = 252;
          while ( 1 )
          {
            v5 = (v4 + 1) & 0xFFFF;
            if ( !(sub_8090D90(v5, 1u) << 24) )
              break;
            v4 = v5;
            if ( v5 > 0x17F )
              return 1;
          }
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}
