int sub_8102680()
{
  unsigned int v0; // r4@1
  int v1; // r6@2
  unsigned int v2; // r4@5
  int v4; // [sp+Ch] [bp-4h]@0

  v2000005 = 0;
  v0 = (unsigned __int8)Random();
  if ( v0 >= (unsigned __int8)sub_810264C(0) )
  {
    LOWORD(v1) = 5;
    while ( (signed __int16)v1 > 0 )
    {
      v2 = (unsigned __int8)Random();
      if ( v2 < (unsigned __int8)sub_810264C(v1) )
        break;
      v1 = ((signed __int16)v1 - 1) & 0xFFFF;
    }
    v2000005 = v1;
  }
  return v4;
}
