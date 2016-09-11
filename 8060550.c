signed int __fastcall FieldObjectSetSpecialAnim(_BYTE *a1, char a2)
{
  _BYTE *v2; // r4@1
  char v3; // r5@1
  signed int result; // r0@2

  v2 = a1;
  v3 = a2;
  if ( (unsigned __int8)FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(a1) )
  {
    result = 1;
  }
  else
  {
    npc_sync_anim_pause_bits(v2);
    v2[28] = v3;
    *v2 = (*v2 | 0x40) & 0x7F;
    *(_WORD *)&gSprites[68 * v2[4] + 50] = 0;
    result = 0;
  }
  return result;
}
