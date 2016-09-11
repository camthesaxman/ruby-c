int __fastcall sub_809A8C8(int a1)
{
  int v1; // r2@1
  unsigned int v2; // r0@1
  __int16 v3; // r0@4
  __int16 v4; // r0@5
  int v5; // r0@8
  int v6; // r0@10
  int v8; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        *(_WORD *)(v1 + 36) = 0;
        break;
      case 1u:
        v3 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v3;
        if ( v3 > 3 )
        {
          *(_WORD *)(v1 + 48) = 0;
          *(_WORD *)(v1 + 36) += *(_WORD *)(v1 + 52);
          v4 = *(_WORD *)(v1 + 50) + 1;
          *(_WORD *)(v1 + 50) = v4;
          if ( v4 > 5 )
          {
            *(_WORD *)(v1 + 50) = 0;
            *(_WORD *)(v1 + 36) = 0;
          }
        }
        break;
      case 2u:
        *(_WORD *)(v1 + 46) = 3;
        break;
      case 3u:
        v5 = *(_WORD *)(v1 + 32) - v20008B6;
        *(_WORD *)(v1 + 32) = v5;
        if ( ((v5 - 73) & 0xFFFFu) > 0xAE )
          *(_BYTE *)(v1 + 62) |= 4u;
        v6 = *(_WORD *)(v1 + 48) - 1;
        *(_WORD *)(v1 + 48) = v6;
        if ( !(v6 << 16) )
        {
          *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 50);
          *(_BYTE *)(v1 + 62) &= 0xFBu;
          *(_WORD *)(v1 + 46) = 4;
        }
        break;
      case 4u:
        *(_WORD *)(v1 + 32) -= v20008B6;
        break;
      default:
        return v8;
    }
  }
  return v8;
}
