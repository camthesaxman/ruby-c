int sub_814825C()
{
  int v0; // r0@5
  char *v1; // r2@7
  int v3; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)byte_3005F3C <= 0x5Au )
  {
    switch ( byte_3005F3C )
    {
      case 0:
        byte_3005F40 = gNatureToMonPokeblockAnim[2 * (unsigned __int8)byte_3005F30];
        dword_3005F20 = (int)&gSprites[68 * (unsigned __int8)byte_3005F2C];
        memcpy(&unk_3005F50, (const char *)dword_3005F20, 68);
        byte_3005F3C = 10;
        return v3;
      case 0xA:
        sub_8148540();
        if ( gNatureToMonPokeblockAnim[2 * (unsigned __int8)byte_3005F30 + 1] )
        {
          *(_BYTE *)(dword_3005F20 + 1) |= 3u;
          *(_BYTE *)(dword_3005F20 + 3) &= 0xC1u;
          v0 = dword_3005F20;
          *(_DWORD *)(dword_3005F20 + 16) = &gSpriteAffineAnimTable_8412050;
          InitSpriteAffineAnim(v0);
        }
        byte_3005F3C = 50;
        goto _0814847A;
      case 0x32:
_0814847A:
        v1 = &gNatureToMonPokeblockAnim[2 * (unsigned __int8)byte_3005F30 + 1];
        if ( *v1 )
        {
          if ( byte_3005F28 )
            StartSpriteAffineAnim(dword_3005F20, *v1);
          else
            StartSpriteAffineAnim(dword_3005F20, *v1 + 10);
        }
        goto _081484EE;
      case 0x3C:
        if ( (sub_81485CC() & 0xFF) == 1 )
        {
          if ( *(_WORD *)algn_3005FB2 )
          {
            FreeOamMatrix((unsigned int)*(_BYTE *)(dword_3005F20 + 3) << 26 >> 27);
            byte_3005F3C = 70;
          }
          else
          {
            ++byte_3005F40;
            sub_8148540();
_081484EE:
            byte_3005F3C = 60;
          }
        }
        break;
      case 0x46:
        sub_8148618();
        byte_3005F40 = 0;
        byte_3005F3C = 0;
        break;
      default:
        return v3;
    }
  }
  return v3;
}
