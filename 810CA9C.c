int __fastcall sub_810CA9C(int a1, int a2)
{
  int result; // r0@2

  a2 = (unsigned __int8)a2;
  if ( (_BYTE)a2 )
  {
    switch ( a2 )
    {
      case 1:
        result = *(_BYTE *)(a1 + 1);
        break;
      case 2:
        result = *(_BYTE *)(a1 + 2);
        break;
      case 3:
        result = *(_BYTE *)(a1 + 3);
        break;
      case 4:
        result = *(_BYTE *)(a1 + 4);
        break;
      case 5:
        result = *(_BYTE *)(a1 + 5);
        break;
      case 6:
        result = *(_BYTE *)(a1 + 6);
        break;
      default:
        result = 0;
        break;
    }
  }
  else
  {
    result = *(_BYTE *)a1;
  }
  return result;
}
