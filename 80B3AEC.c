int __fastcall sub_80B3AEC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 || word_300179E & 2 )
  {
    sub_80B39D0((unsigned __int8)byte_3000711, (unsigned __int8)byte_3000711, 0);
    audio_play(5u);
    if ( *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711) + dword_300070C) != 4
      || (signed int)HIWORD(dword_3004B20[10 * v1 + 2]) <= 9
      || (unsigned __int8)sub_80A9424(0xCu, 1u) != 1 )
    {
      sub_80B4378(v1);
    }
    else
    {
      DisplayItemMessageOnField(v1, "Ã´àà", sub_80B4378, 50145);
    }
  }
  return v3;
}
