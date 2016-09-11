int sub_810E74C()
{
  unsigned int v0; // r0@1
  __int16 v1; // r1@3
  int v3; // [sp+0h] [bp-4h]@0

  v0 = (char)(v2025749 - 17);
  if ( v0 > 5 )
  {
def_810E764:
    v1 = 0;
  }
  else
  {
    switch ( v0 )
    {
      case 1u:
        v1 = 1;
        break;
      case 2u:
        v1 = 2;
        break;
      case 3u:
        v1 = 3;
        break;
      case 4u:
        v1 = 4;
        break;
      case 5u:
        v1 = 15;
        break;
      default:
        goto def_810E764;
    }
  }
  VarSet(0x4043u, v1);
  return v3;
}
