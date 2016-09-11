int __fastcall sub_812C084(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@2
  unsigned __int8 v3; // r0@5
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v2 + 4) == 64 )
    {
      *((_WORD *)v2 + 4) = 0;
      if ( (unsigned __int8)sub_80852FC() == 1 )
      {
        DestroyTask(v1);
      }
      else
      {
        *v2 = (int)sub_812C118;
        v3 = GetPlayerAvatarObjectId();
        BeginNormalPaletteFade(~(1 << (((unsigned __int8)gSprites[68 * v3 + 5] >> 4) + 16)), 4, 8u, 0, 31);
      }
    }
    else
    {
      ++*((_WORD *)v2 + 4);
    }
  }
  return v5;
}
