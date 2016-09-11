char ***__fastcall sub_811A920(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // r3@1
  int v3; // r2@1
  unsigned int v4; // r0@2
  int v5; // r0@5

  v2 = a1;
  v3 = 0;
  if ( gLandmarkLists[0] != 88 )
  {
    while ( 1 )
    {
      v4 = (unsigned __int8)gLandmarkLists[8 * v3];
      if ( v4 > v2 )
        break;
      if ( v4 != v2 )
      {
        v3 = (v3 + 1) & 0xFFFF;
        if ( gLandmarkLists[8 * v3] != 88 )
          continue;
      }
      v5 = (unsigned __int8)gLandmarkLists[8 * v3];
      if ( v5 == 88 || v5 != v2 )
        return 0;
      while ( (unsigned __int8)gLandmarkLists[8 * v3 + 1] != a2 )
      {
        v3 = (v3 + 1) & 0xFFFF;
        if ( (unsigned __int8)gLandmarkLists[8 * v3] != v2 )
          return 0;
      }
      return (&off_83FBA1C)[2 * v3];
    }
  }
  return 0;
}
