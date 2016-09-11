int __fastcall sub_80EED2C(int a1)
{
  signed __int16 v1; // r2@3
  int v3; // [sp+0h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 <= 5u )
  {
    switch ( a1 )
    {
      case 0:
        v1 = 8000;
        goto _080EED94;
      case 1:
        v1 = 5953;
        goto _080EED94;
      case 3:
      case 4:
        v1 = 8000;
        goto _080EED94;
      case 2:
        v1 = 31552;
        goto _080EED94;
      case 5:
        v1 = 16192;
_080EED94:
        v4000000 = v1;
        break;
      default:
        return v3;
    }
  }
  return v3;
}
