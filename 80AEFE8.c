int __fastcall sub_80AEFE8(int a1, int a2)
{
  signed int v2; // r0@1

  a2 = (unsigned __int8)a2;
  v2 = 0;
  if ( (unsigned __int8)a2 <= 4u )
  {
    switch ( a2 )
    {
      case 0:
        v2 = 128;
        break;
      case 1:
        v2 = 132;
        break;
      case 2:
        v2 = 134;
        break;
      case 3:
        v2 = 136;
        break;
      case 4:
        v2 = 130;
        break;
      default:
        return (v2 + 36864) & 0xFFFF;
    }
  }
  return (v2 + 36864) & 0xFFFF;
}
