int sub_810FDAC()
{
  signed int v0; // r3@1
  signed int v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  if ( (unsigned int)v202E8CC - 8 <= 7 )
  {
    switch ( v202E8CC )
    {
      case 0xAu:
        v0 = 0;
        v1 = 3;
        break;
      case 0xBu:
        v0 = 0;
        v1 = 1;
        break;
      case 0xCu:
        v0 = 1;
        v1 = 0;
        break;
      case 0xDu:
        v0 = 0;
        v1 = 4;
        break;
      case 0xEu:
        v0 = 1;
        v1 = 5;
        break;
      default:
        break;
    }
  }
  sub_810FE1C(33720300, v0, v1);
  return v3;
}
