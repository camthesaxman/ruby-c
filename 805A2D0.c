int __fastcall sub_805A2D0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r0@2
  unsigned __int8 v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    v3 = GetPlayerAvatarGraphicsIdByStateId(0);
    sub_805B980(v2, v3);
    v4 = GetFaceDirectionAnimId(*((_BYTE *)v2 + 24) & 0xF);
    FieldObjectSetSpecialAnim(v2, v4);
    v202E85E = 0;
    script_env_2_disable(0);
    DestroySprite((int)&gSprites[68 * *((_BYTE *)v2 + 26)]);
    DestroyTask(v1);
  }
  return v6;
}
