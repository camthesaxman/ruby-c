int sub_8049DE0()
{
  unsigned int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = *(_BYTE *)(dword_3004824 + 123);
  if ( v0 <= 0xF )
  {
    switch ( v0 )
    {
      case 0u:
        sub_8049680();
        break;
      case 1u:
        sub_8049860();
        break;
      case 2u:
        sub_804997C();
        break;
      case 3u:
        sub_8049AC0();
        break;
      case 4u:
        sub_8049BC0();
        break;
      case 6u:
        sub_8049C8C();
        break;
      case 7u:
        sub_8049CC4();
        break;
      case 8u:
        sub_8049D44();
        break;
      case 9u:
        sub_8048A14();
        break;
      case 0xAu:
        sub_8048A50();
        break;
      case 0xBu:
        sub_8049D9C();
        break;
      case 0xCu:
        sub_8049DC4();
        break;
      case 0xDu:
        sub_8048A90();
        break;
      case 0xEu:
        DisplayMessageAndContinueTask();
        break;
      case 0xFu:
        sub_8049954();
        break;
      default:
        return v2;
    }
  }
  return v2;
}
