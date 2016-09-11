int sub_80AF3C0()
{
  signed int v0; // r2@1
  char v1; // r1@3
  signed int v2; // r0@4
  int v4; // [sp+0h] [bp-4h]@0

  v0 = 33657440;
  do
  {
    if ( *(_WORD *)(v0 + 6) )
    {
      v2 = *(_WORD *)(v0 + 2);
      v1 = 0;
      if ( v2 > 0 )
      {
        v1 = 1;
        if ( v2 > 29 )
        {
          v1 = 2;
          if ( v2 > 59 )
          {
            v1 = 4;
            if ( v2 <= 79 )
              v1 = 3;
          }
        }
      }
    }
    else
    {
      v1 = 5;
    }
    *(_BYTE *)(v0 + 26) = v1;
    v0 += 28;
  }
  while ( v0 <= 33657524 );
  return v4;
}
