int sub_80FC600()
{
  unsigned int v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( !v2000004 )
  {
    v0 = (unsigned __int8)sub_80FAB60();
    if ( v0 <= 5 )
    {
      switch ( v0 )
      {
        case 3u:
          sub_80FC254();
          break;
        case 4u:
          if ( v200001E == 2 || v200001E == 4 )
          {
            m4aSongNumStart(5);
            v2000A6E = 1;
            sub_80FC244((int)sub_80FC69C);
          }
          break;
        case 5u:
          m4aSongNumStart(5);
          v2000A6E = 0;
          sub_80FC244((int)sub_80FC69C);
          break;
        default:
          return v2;
      }
    }
  }
  return v2;
}
