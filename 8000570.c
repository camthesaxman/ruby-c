int VBlankIntr()
{
  int v0; // r0@1
  __int16 v1; // r4@3
  int v2; // r0@5
  int v3; // r0@5
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = (unsigned __int8)gLinkVSyncDisabled;
  if ( !gLinkVSyncDisabled )
    v0 = LinkVSync();
  v1 = v4000208;
  v4000208 = 0;
  m4aSoundVSync(v0);
  v4000208 = v1;
  ++dword_3001790;
  if ( dword_300177C )
    call_via_r0();
  ++dword_3001794;
  gPcmDmaCounter = byte_3005FD4;
  v2 = m4aSoundMain();
  v3 = sub_800C35C(v2);
  Random(v3);
  v3007FF8 |= 1u;
  word_300178C |= 1u;
  return v5;
}
