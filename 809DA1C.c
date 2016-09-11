int sub_809DA1C()
{
  int (*v0)(); // r0@3
  int v2; // [sp+0h] [bp-4h]@0

  if ( v2018008 <= 6u )
  {
    switch ( v2018008 )
    {
      case 0u:
      case 5u:
        v0 = sub_809E19C;
        goto _0809DA6E;
      case 4u:
        v0 = sub_809E19C;
        goto _0809DA6E;
      case 2u:
      case 3u:
        v0 = sub_809EB40;
        goto _0809DA6E;
      case 1u:
      case 6u:
        v0 = sub_809E3FC;
_0809DA6E:
        v201800F = CreateTask((int)v0, 0);
        break;
      default:
        return v2;
    }
  }
  return v2;
}
