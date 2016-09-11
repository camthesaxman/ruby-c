signed int sub_80F39A4()
{
  signed int result; // r0@5
  int v1; // [sp+0h] [bp-1Ch]@2
  unsigned int v2; // [sp+4h] [bp-18h]@2
  char *v3; // [sp+8h] [bp-14h]@3
  unsigned int v4; // [sp+Ch] [bp-10h]@3

  if ( v200BC93 > 0xBu )
    goto LABEL_9;
  v1 = (v200BC93 << 9) + 33596492;
  v2 = (v2 & 0xFFFF0000 | 0x200) & 0xFFFF | ((v200BC93 + 11) << 16);
  LoadSpriteSheet((int)&v1);
  if ( v200BC93 <= 4u )
  {
    v3 = (char *)&gUnknown_083E3C60 + 32 * v200BC93;
    v4 = v4 & 0xFFFF0000 | (v200BC93 + 10);
    LoadSpritePalette((int)&v3);
  }
  ++v200BC93;
  if ( v200BC93 > 0xBu )
LABEL_9:
    result = 0;
  else
    result = 1;
  return result;
}
