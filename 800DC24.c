int sub_800DC24()
{
  void *v0; // r4@2
  signed int v1; // r0@5
  signed int v2; // r0@12
  int v4; // [sp+Ch] [bp-4h]@0

  if ( v2024D26 == 3 )
  {
    v0 = &unk_3004210;
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400E57, 160, 13, 2);
LABEL_25:
    sub_8002F44((int)v0);
    return v4;
  }
  if ( !(v20239F8 & 0x40) )
  {
    if ( v2024D26 == 1 )
    {
      if ( *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12) )
      {
        v0 = &unk_3004210;
        InitWindow((int)&unk_3004210, (int)&gUnknown_08400E48, 160, 21, 2);
        sub_8002F44((int)&unk_3004210);
        InitWindow((int)&unk_3004210, (int)&gUnknown_08400E4F, 168, 6, 2);
        goto LABEL_25;
      }
    }
    else if ( !*((_WORD *)&gLinkPlayers + 14 * v20160CB + 12) )
    {
      InitWindow((int)&unk_3004210, (int)&gUnknown_08400E48, 160, 21, 2);
      sub_8002F44((int)&unk_3004210);
      InitWindow((int)&unk_3004210, (int)&gUnknown_08400E4F, 168, 6, 2);
      sub_8002F44((int)&unk_3004210);
      return v4;
    }
    goto _0800DDA8;
  }
  if ( v2024D26 != 1 )
  {
    v2 = *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12);
    if ( v2 == 1 )
      goto _0800DDA8;
    if ( v2 > 1 )
    {
      if ( v2 != 2 )
      {
        if ( v2 != 3 )
          return v4;
_0800DDA8:
        v0 = &unk_3004210;
        InitWindow((int)&unk_3004210, (int)&gUnknown_08400E48, 160, 6, 2);
        sub_8002F44((int)&unk_3004210);
        InitWindow((int)&unk_3004210, (int)&gUnknown_08400E4F, 168, 21, 2);
        goto LABEL_25;
      }
    }
    else if ( *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12) )
    {
      return v4;
    }
    v0 = &unk_3004210;
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400E48, 160, 21, 2);
    sub_8002F44((int)&unk_3004210);
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400E4F, 168, 6, 2);
    goto LABEL_25;
  }
  v1 = *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12);
  if ( v1 == 1 )
  {
_0800DC9C:
    v0 = &unk_3004210;
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400E48, 160, 21, 2);
    sub_8002F44((int)&unk_3004210);
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400E4F, 168, 6, 2);
    goto LABEL_25;
  }
  if ( v1 <= 1 )
  {
    if ( *((_WORD *)&gLinkPlayers + 14 * v20160CB + 12) )
      return v4;
    goto _0800DDA8;
  }
  if ( v1 == 2 )
    goto _0800DDA8;
  if ( v1 == 3 )
    goto _0800DC9C;
  return v4;
}
