int __fastcall sub_80FF394(__int16 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int16 v3; // r3@1
  unsigned int v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v3 = a1;
  v4 = *((_BYTE *)&gDecorations + 32 * a3 + 18);
  if ( v4 <= 9 )
  {
    switch ( v4 )
    {
      case 0u:
        sub_80FF1EC(v3, a2, 1u, 1u, a3);
        break;
      case 1u:
        sub_80FF1EC(v3, a2, 2u, 1u, a3);
        break;
      case 2u:
        sub_80FF1EC(v3, a2, 3u, 1u, a3);
        break;
      case 3u:
        sub_80FF1EC(v3, a2, 4u, 2u, a3);
        break;
      case 4u:
        sub_80FF1EC(v3, a2, 2u, 2u, a3);
        break;
      case 5u:
        sub_80FF1EC(v3, a2, 1u, 2u, a3);
        break;
      case 6u:
        sub_80FF1EC(v3, a2, 1u, 3u, a3);
        break;
      case 7u:
        sub_80FF1EC(v3, a2, 2u, 4u, a3);
        break;
      case 8u:
        sub_80FF1EC(v3, a2, 3u, 3u, a3);
        break;
      case 9u:
        sub_80FF1EC(v3, a2, 3u, 2u, a3);
        break;
      default:
        return v6;
    }
  }
  return v6;
}
