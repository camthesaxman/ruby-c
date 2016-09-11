int __fastcall unref_sub_807DCB4(unsigned __int8 a1)
{
  unsigned int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = a1 - 1;
  if ( v1 <= 9 )
  {
    switch ( v1 )
    {
      case 0u:
        sub_808070C(1);
        break;
      case 1u:
        sub_808070C(2);
        break;
      case 2u:
        sub_808070C(3);
        break;
      case 3u:
        sub_808070C(4);
        break;
      case 4u:
        sub_808070C(5);
        break;
      case 5u:
        sub_808070C(6);
        break;
      case 6u:
        sub_808070C(9);
        break;
      case 7u:
        sub_808070C(7);
        break;
      case 8u:
        sub_808070C(8);
        break;
      case 9u:
        sub_808070C(11);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
